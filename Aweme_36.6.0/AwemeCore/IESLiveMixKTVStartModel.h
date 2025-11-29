@class NSString;

@interface IESLiveMixKTVStartModel : NSObject

@property (nonatomic) BOOL canApplySing;
@property (nonatomic) BOOL canMultiChorusSing;
@property (nonatomic) BOOL disableLyricInStage;
@property (copy, nonatomic) NSString *enterFrom;

- (id)initWithCanApplySing:(BOOL)a0 canMultiChorusSing:(BOOL)a1 disableLyricInStage:(BOOL)a2 enterFrom:(id)a3;
- (void).cxx_destruct;

@end
