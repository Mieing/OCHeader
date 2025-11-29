@class NSString, NSMutableArray;

@interface PushMailWrap : NSObject <NSCopying>

@property (retain, nonatomic) NSString *nsSender;
@property (retain, nonatomic) NSString *nsSenderAddress;
@property (retain, nonatomic) NSString *nsSubject;
@property (retain, nonatomic) NSString *nsDigest;
@property (retain, nonatomic) NSString *nsDate;
@property (retain, nonatomic) NSString *nsWapLink;
@property (retain, nonatomic) NSString *nsMailID;
@property (retain, nonatomic) NSString *nsAccount;
@property (retain, nonatomic) NSString *nsArgs;
@property (retain, nonatomic) NSMutableArray *arrToList;
@property (retain, nonatomic) NSMutableArray *arrCCList;
@property (nonatomic) BOOL bHasAttachment;
@property (nonatomic) unsigned long long uiUin;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
