@class NSMutableArray, NSMutableDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface BdmsControlUtil : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serial_queue;
@property (retain, nonatomic) NSMutableDictionary *cmd_map;
@property (retain, nonatomic) NSUserDefaults *sharedPref;
@property (retain, nonatomic) NSMutableArray *regexModeList;

+ (id)sharedInstance;

- (id)isUrlMatched:(id)a0;
- (void)parseDynContent:(id)a0;
- (void)updateRegexpModeFromConfigString:(id)a0 saveInSP:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
