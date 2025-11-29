@class YYTextLayout;

@interface IESECLiveReplayMessageCellViewModel : NSObject <IGListDiffable>

@property (nonatomic) double cachedCellHeight;
@property (retain, nonatomic) YYTextLayout *textLayout;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)configWithModel:(id)a0;
- (id)calculateTextLayoutWithAttributedString:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)cellHeight;

@end
