@class UIKey;

@interface FlutterUIPressProxy : NSObject {
    void /* unknown type, empty encoding */ press;
    void /* unknown type, empty encoding */ event;
}

@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) UIKey *key;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double timestamp;

- (id)initWithPress:(id)a0 event:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
