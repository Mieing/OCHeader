@interface HTSFormatEnterRoomContext : NSObject

@property (nonatomic) BOOL targetAndReplacedControllerIsSame;
@property (copy, nonatomic) id /* block */ didEnterRoomSuccess;
@property (copy, nonatomic) id /* block */ didEnterRoomFailed;
@property (nonatomic) BOOL completionBlockInvoked;

- (void).cxx_destruct;

@end
