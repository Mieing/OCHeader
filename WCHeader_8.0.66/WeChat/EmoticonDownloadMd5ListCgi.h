@class NSString, NSDictionary, NSData, NSMutableSet, NSMutableArray, OrderedDictionary;
@protocol EmoticonDownloadMd5ListCgiDelegate;

@interface EmoticonDownloadMd5ListCgi : MMObject

@property (nonatomic) unsigned long long m_type;
@property (nonatomic) BOOL m_hasStartRequestOnce;
@property (retain, nonatomic) NSString *logPrefix;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSData *reqBuff;
@property (retain, nonatomic) NSDictionary *validEmojiInfoObjDic;
@property (retain, nonatomic) NSMutableArray *md5List;
@property (retain, nonatomic) NSMutableSet *needUpateMd5Set;
@property (retain, nonatomic) OrderedDictionary *md5ObjectOrderedList;
@property (retain, nonatomic) NSString *versionKey;
@property (weak, nonatomic) id<EmoticonDownloadMd5ListCgiDelegate> delegate;

- (id)initWithType:(unsigned long long)a0 reqBuff:(id)a1 validEmojiInfoObjDic:(id)a2;
- (void)startRequest;
- (void)continueRequestMd5List;
- (void)requestAllEmojiInfoList;
- (void)callFailedDelegate;
- (void)restartDownloadAllMd5;
- (void)callOkDelegate;
- (id)convertMd5List:(id)a0;
- (void).cxx_destruct;

@end
