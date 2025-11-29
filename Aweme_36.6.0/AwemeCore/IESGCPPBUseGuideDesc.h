@class NSString, GPBInt64BoolDictionary;

@interface IESGCPPBUseGuideDesc : GPBMessage

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *guideImg;
@property (retain, nonatomic) GPBInt64BoolDictionary *guideTags;
@property (readonly, nonatomic) unsigned long long guideTags_Count;

+ (id)descriptor;

@end
