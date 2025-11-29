@class NSString, MMUIViewController, CMessageWrap;

@interface EmoticonCameraTakeModel : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL needCheck;
@property (nonatomic) BOOL needAsyncCamerFollowCheck;
@property (nonatomic) BOOL needAsyncUpload;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) NSString *username;
@property (weak, nonatomic) MMUIViewController *viewController;

- (id)init;
- (void).cxx_destruct;

@end
