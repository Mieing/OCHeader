@class NSString;

@interface WCFinderMemberShipDetailInfoRequestParam : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *liveNoticeEncryptedId;
@property (nonatomic) int commentScene;
@property (nonatomic) BOOL isPreviewMode;

- (id)description;
- (void).cxx_destruct;

@end
