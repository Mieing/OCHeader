@class NSString;

@interface AWERecordCloseViewState : NSObject <FPUIState>

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hidden;
@property (nonatomic) unsigned long long alertStype;
@property (nonatomic) unsigned long long alertActionSet;
@property (copy, nonatomic) NSString *closeWarningTitle;
@property (nonatomic) BOOL inspirationPath;

- (id)initWithState:(unsigned long long)a0 enable:(BOOL)a1 hidden:(BOOL)a2;
- (void).cxx_destruct;

@end
