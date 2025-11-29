@class NSString;

@interface WCBGUserInfo : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *m_nsWCBGImgObjectID;
@property (nonatomic) int m_iWCFlag;
@property (copy, nonatomic) NSString *m_pcWCBGImgID;
@property (copy, nonatomic) NSString *bgImgAesKey;
@property (copy, nonatomic) NSString *bgImgAuthKey;
@property (nonatomic) unsigned int bgImgSize;
@property (copy, nonatomic) NSString *bgImgMd5;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *bgFileId;

- (id)init;
- (void).cxx_destruct;

@end
