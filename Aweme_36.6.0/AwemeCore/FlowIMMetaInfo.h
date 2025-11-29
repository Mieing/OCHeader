@class NSString;

@interface FlowIMMetaInfo : NSObject {
    void /* unknown type, empty encoding */ type;
    void /* function */ info;
    void /* unknown type, empty encoding */ typeValue;
}

@property (nonatomic, readonly) NSString *info;

- (void).cxx_destruct;
- (id)init;

@end
