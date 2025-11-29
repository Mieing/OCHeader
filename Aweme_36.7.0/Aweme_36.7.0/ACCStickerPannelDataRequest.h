@class NSString, NSArray;

@interface ACCStickerPannelDataRequest : NSObject

@property (copy, nonatomic) NSString *uploadURI;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *customPanelName;
@property (copy, nonatomic) NSArray *filterTags;

- (void).cxx_destruct;

@end
