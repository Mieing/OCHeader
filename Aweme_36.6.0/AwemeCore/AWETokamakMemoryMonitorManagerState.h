@class NSString;

@interface AWETokamakMemoryMonitorManagerState : NSObject <NSSecureCoding> {
    BOOL _isOOMBefore;
    BOOL _isLastSessionMemoryWarning;
    BOOL _isLastSessionActived;
    unsigned int _relaunchReasonBefore;
    unsigned int _activeCountToday;
    NSString *_activeCountTag;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
