@class HTSLiveRoom;

@interface IESLiveInteractiveQuickStartAPI : HTSLiveApi

@property (retain, nonatomic) HTSLiveRoom *room;

- (void)newVersionInitLinkMicWithExtra:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
