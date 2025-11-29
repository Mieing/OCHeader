@class NSString, NSArray;

@interface IESECCommentSurveySubOptionConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showInput;
@property (copy, nonatomic) NSString *inputPlaceHolder;
@property (copy, nonatomic) NSArray *subOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subOptionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
