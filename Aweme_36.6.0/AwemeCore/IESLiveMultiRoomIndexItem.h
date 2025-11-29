@class NSString;
@protocol IESLiveDIContext;

@interface IESLiveMultiRoomIndexItem : NSObject

@property (retain, nonatomic) NSString *index;
@property (weak, nonatomic) id<IESLiveDIContext> diContext;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) BOOL existMultiRoom;
@property (nonatomic) BOOL mainScene;

- (void).cxx_destruct;

@end
