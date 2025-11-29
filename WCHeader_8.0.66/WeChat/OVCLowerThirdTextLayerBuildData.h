@class NSDictionary;

@interface OVCLowerThirdTextLayerBuildData : NSObject

@property (readonly, nonatomic) NSDictionary *mustacheData;
@property (readonly, nonatomic) NSDictionary *userInputsByBlockID;
@property (readonly, nonatomic) NSDictionary *defaultContentsByBlockID;
@property (readonly, nonatomic) NSDictionary *placeholdersByBlockID;
@property (readonly, nonatomic) BOOL shouldUsePlaceholder;

- (id)initWithMustacheData:(id)a0 userInputsByBlockID:(id)a1 defaultContentsByBlockID:(id)a2 placeholdersByBlockID:(id)a3 shouldUsePlaceholder:(BOOL)a4;
- (void).cxx_destruct;

@end
