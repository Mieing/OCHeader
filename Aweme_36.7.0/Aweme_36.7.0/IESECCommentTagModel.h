@class NSNumber, NSString, IESECURLModel;

@interface IESECCommentTagModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *tagType;
@property (copy, nonatomic) NSString *tagText;
@property (retain, nonatomic) IESECURLModel *tagIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
