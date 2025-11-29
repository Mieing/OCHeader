@interface AWEPlayletVIPAndIAAAutoOpenUtilInfoModel : NSObject

@property (nonatomic) unsigned long long openType;
@property (nonatomic) BOOL isVIPSchemaOpened;
@property (copy, nonatomic) id /* block */ openContextHandler;
@property (copy, nonatomic) id /* block */ getIntext;

- (void).cxx_destruct;

@end
