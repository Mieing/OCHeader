@protocol AWEIMShareModelProtocol;

@interface AWELongPressPanelShareModelActionConfig : NSObject

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
