@class NSData, NSString;

@interface CModUserImgWrap : NSObject

@property (retain, nonatomic) NSData *m_dtImg;
@property (retain, nonatomic) NSString *m_nsHDImgMD5;
@property (nonatomic) unsigned int m_uiImgType;
@property (retain, nonatomic) NSString *m_nsHeadImgUrl;
@property (retain, nonatomic) NSString *m_nsHeadHDImgUrl;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
