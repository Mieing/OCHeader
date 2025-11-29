@class NSString;

@interface TempoiOS.TempoAttribute : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ isStatic;
    void /* function */ name;
    void /* function */ value;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) id value;

- (void).cxx_destruct;
- (id)init;

@end
