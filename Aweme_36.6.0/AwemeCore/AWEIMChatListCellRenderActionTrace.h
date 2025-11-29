@class NSMutableSet, NSMutableDictionary;

@interface AWEIMChatListCellRenderActionTrace : IESIMFPSActionTrace

@property (retain, nonatomic) NSMutableSet *chatTypes;
@property (retain, nonatomic) NSMutableSet *sections;
@property (retain, nonatomic) NSMutableDictionary *stageDict;

- (void)handleActionTraitDict:(id)a0;
- (void)handleFrameTraceTrait:(id)a0;
- (id)traitDict;
- (void).cxx_destruct;
- (id)init;
- (void)clean;

@end
