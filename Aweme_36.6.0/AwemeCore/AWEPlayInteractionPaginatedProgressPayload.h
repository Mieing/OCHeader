@class NSString, AWEElementContainer, AWEAwemeModel, NSDictionary;

@interface AWEPlayInteractionPaginatedProgressPayload : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEElementContainer *container;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;

- (void).cxx_destruct;

@end
