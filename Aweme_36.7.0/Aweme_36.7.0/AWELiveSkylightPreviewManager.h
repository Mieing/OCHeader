@class NSString;
@protocol AWELiveUserAvatarPreviewProtocol;

@interface AWELiveSkylightPreviewManager : NSObject <AWELiveSkylightPreviewProtocol>

@property (copy, nonatomic) NSString *uid;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) id<AWELiveUserAvatarPreviewProtocol> livePreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
