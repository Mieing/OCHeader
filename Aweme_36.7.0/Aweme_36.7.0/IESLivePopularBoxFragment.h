@class HTSLiveToolbarItem, NSString, IESLivePopularBoxApi;

@interface IESLivePopularBoxFragment : IESLiveRoomComponent

@property (retain, nonatomic) HTSLiveToolbarItem *popularBoxItem;
@property (copy, nonatomic) NSString *popularBoxSchema;
@property (retain, nonatomic) IESLivePopularBoxApi *api;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentCreate;
- (void)componentMount;
- (void)addToolbarItem;
- (BOOL)popularBoxMoreToolbarReddotShowed;
- (void)popularBoxItemDidClick;
- (void)popularBoxItemDidShow;
- (void).cxx_destruct;

@end
