@class NSString, AWEShareWebMetadataModel, AWEAwemeModel;

@interface AWEShareWebViewModel : NSObject

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *webViewType;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEShareWebMetadataModel *metadata;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
