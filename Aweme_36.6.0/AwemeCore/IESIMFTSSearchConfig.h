@class NSArray, NSString;

@interface IESIMFTSSearchConfig : NSObject

@property (copy, nonatomic) NSArray *keywords;
@property (nonatomic) long long sortOrder;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSArray *messageTypes;
@property (copy, nonatomic) NSArray *aweTypes;
@property (copy, nonatomic) NSArray *extTypes;
@property (copy, nonatomic) NSArray *contentTypes;
@property (nonatomic) long long model;

- (void).cxx_destruct;
- (id)init;

@end
