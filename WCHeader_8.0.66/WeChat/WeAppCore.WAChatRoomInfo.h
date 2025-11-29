@class NSString;

@interface WeAppCore.WAChatRoomInfo : NSObject {
    void /* unknown type, empty encoding */ userName;
    void /* unknown type, empty encoding */ opengid;
    void /* unknown type, empty encoding */ openSingleRoomid;
}

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *opengid;
@property (nonatomic, copy) NSString *openSingleRoomid;
@property (nonatomic) void /* unknown type, empty encoding */ chatType;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
