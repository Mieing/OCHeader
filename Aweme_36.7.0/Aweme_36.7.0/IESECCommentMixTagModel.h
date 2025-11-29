@class NSNumber, NSString;

@interface IESECCommentMixTagModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *tagID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) NSNumber *tagType;
@property (retain, nonatomic) NSNumber *sentiment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
