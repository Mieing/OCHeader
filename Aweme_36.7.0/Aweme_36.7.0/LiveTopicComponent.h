@class BaseComponent, NSString, HTSLiveImage, GPBInt32Array;

@interface LiveTopicComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;
@property (copy, nonatomic) NSString *id_p;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *shortPrefix;
@property (copy, nonatomic) NSString *shortTopicContent;
@property (copy, nonatomic) NSString *topicContent;
@property (copy, nonatomic) NSString *defaultContent;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) GPBInt32Array *showInSubTabsArray;
@property (readonly, nonatomic) unsigned long long showInSubTabsArray_Count;
@property (nonatomic) long long topicFrom;
@property (nonatomic) long long topicType;

+ (id)descriptor;

@end
