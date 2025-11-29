@class NSString;

@interface FlowIMX.FlowIMSubMsgIndexKey : NSObject {
    void /* unknown type, empty encoding */ mainIndex;
    void /* unknown type, empty encoding */ innerIndex;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;

@end
