@interface DanceUIEnvironmentWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ phase;
    void /* unknown type, empty encoding */ focusedValues;
    void /* unknown type, empty encoding */ gestureRecognizerObservers;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
