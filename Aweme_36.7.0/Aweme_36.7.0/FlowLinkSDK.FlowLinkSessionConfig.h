@class NSDictionary;

@interface FlowLinkSDK.FlowLinkSessionConfig : NSObject {
    void /* unknown type, empty encoding */ params;
}

@property (nonatomic, readonly) NSDictionary *rawValue;
@property (nonatomic, readonly) NSDictionary *stringMapValue;
@property (nonatomic, readonly) BOOL isEmpty;

- (id)initWithRaw:(id)a0;
- (void)updateParams:(id)a0 isOverwrite:(BOOL)a1 shouldNormalize:(BOOL)a2;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
