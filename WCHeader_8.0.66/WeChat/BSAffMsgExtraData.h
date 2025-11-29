@class NSString;

@interface BSAffMsgExtraData : NSObject

@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *recInfo;
@property (nonatomic) unsigned int recNativeCardStyle;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSString *reportInfo;
@property (retain, nonatomic) NSString *recCardId;
@property (nonatomic) BOOL isBoxUp;
@property (nonatomic) BOOL isMixDigest;

- (void).cxx_destruct;

@end
