@class NSString, NSDictionary, AWEAwemeModel;
@protocol AFDRichContentContainerViewControllerProtocol;

@interface AWEECOpenGoodDetailPayload : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *schemaString;
@property (copy, nonatomic) NSString *clickAreaString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *customEntranceInfo;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol> richContentContainer;

- (void).cxx_destruct;

@end
