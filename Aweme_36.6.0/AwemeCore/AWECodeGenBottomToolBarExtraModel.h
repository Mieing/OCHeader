@class NSString, NSNumber;

@interface AWECodeGenBottomToolBarExtraModel : NSObject

@property (copy, nonatomic) NSString *tabDesc;
@property (copy, nonatomic) NSString *typeDesc;
@property (nonatomic) BOOL shouldAutoPopup;
@property (nonatomic) BOOL banBackupAndExit;
@property (copy, nonatomic) NSString *disableExtra;
@property (copy, nonatomic) NSString *bizLogExtra;
@property (copy, nonatomic) NSString *bizData;
@property (retain, nonatomic) NSNumber *popupNumThreshold;
@property (retain, nonatomic) NSNumber *bottomBarShowNumThreshold;
@property (copy, nonatomic) NSString *replaceComponentId;
@property (nonatomic) unsigned long long diagnoseStyle;
@property (nonatomic) BOOL forceShowDiagnoseEntrance;
@property (nonatomic) long long updateType;

- (void).cxx_destruct;

@end
