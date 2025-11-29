@class NSString, IESECURLModel;

@interface IESECWinAuthorInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *windowName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *followStatus;
@property (retain, nonatomic) IESECURLModel *avatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
