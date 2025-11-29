@class NSString;

@interface WeAppCore.WAAfterLaunchHandler : NSObject {
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ recommendDishBuffer;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ waitingResponse;
@property (nonatomic, copy) NSString *recommendDishBuffer;

- (id)initWithAppId:(id)a0;
- (void)fetchData;
- (id)init;
- (void).cxx_destruct;

@end
