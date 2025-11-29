@class NSMutableString, AWERadarSpringActivityConfigModel, UILabel, NSMutableArray;

@interface AWERadarGroupEnterCommandView : UIView

@property (retain, nonatomic) NSMutableArray *letters;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) NSMutableString *groupCommand;
@property (nonatomic) BOOL isFull;
@property (nonatomic) BOOL isEmpty;
@property (retain, nonatomic) AWERadarSpringActivityConfigModel *configModel;

+ (double)suggestHeight;
+ (double)suggestWidth;

- (void)setGroupComandText:(id)a0;
- (void)deleteLetter;
- (void)insertLetter:(id)a0;
- (void)fillGroupCommand:(id)a0;
- (void)setGroupCommandInvalid;
- (id)p_currentLastLetter;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
