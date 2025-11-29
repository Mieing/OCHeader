@class NSNumber, NSArray, NSMutableArray, IESLiveChatChannelToolbar;

@interface IESLiveChatChannelToolbarManager : NSObject

@property (retain, nonatomic) NSArray *indexDict;
@property (retain, nonatomic) NSMutableArray *toolbarItems;
@property (weak, nonatomic) IESLiveChatChannelToolbar *toolbar;
@property (retain, nonatomic) NSNumber *channelID;
@property (nonatomic) unsigned long long publicScreenType;

- (BOOL)containIdentifier:(id)a0;
- (BOOL)containItem:(id)a0;
- (void)reloadToolbar;
- (void)bindWithToolbar:(id)a0;
- (void)updatePublicScreenInfoModel:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (void)insertItem:(id)a0;
- (id)init;
- (void)removeIdentifier:(id)a0;
- (void)clean;

@end
