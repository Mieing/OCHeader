@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveNativeAppShareScreenManagerConfiguration : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void).cxx_destruct;

@end
