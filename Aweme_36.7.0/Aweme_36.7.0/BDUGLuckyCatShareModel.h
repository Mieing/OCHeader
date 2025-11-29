@class NSString, NSDictionary, BDUGLuckyCatShareTokenModel;

@interface BDUGLuckyCatShareModel : NSObject

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *strategy;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *abstract;
@property (copy, nonatomic) NSString *targetUrl;
@property (copy, nonatomic) NSString *videoUrl;
@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSDictionary *extraData;
@property (nonatomic) BOOL showPanel;
@property (nonatomic) BOOL showIM;
@property (copy, nonatomic) NSString *panelId;
@property (retain, nonatomic) BDUGLuckyCatShareTokenModel *tokenModel;

- (void).cxx_destruct;

@end
