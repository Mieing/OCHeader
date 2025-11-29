@class NSString;

@interface MMMusicVideoTransitionModel : MMObject

@property (retain, nonatomic) NSString *transitionEffectId;
@property (retain, nonatomic) NSString *transitionName;
@property (retain, nonatomic) NSString *transitionPreviewPath;
@property (retain, nonatomic) NSString *transitionPagPath;

- (id)description;
- (BOOL)isValid;
- (unsigned long long)toMVStatTransitionForReport;
- (void).cxx_destruct;

@end
