@class AWEAwemeTextExtraModel, NSString, NSDictionary, AWEPlayInteractionDescriptionAttachModel;

@interface AWEPlayInteractionDescriptionExtraModel : NSObject

@property (retain, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) AWEAwemeTextExtraModel *textExtraModel;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned long long insertIndex;
@property (retain, nonatomic) NSString *replaceText;
@property (nonatomic) long long extraModelType;
@property (nonatomic) long long extraModelSubType;
@property (nonatomic) long long produceType;
@property (retain, nonatomic) NSDictionary *textAttributes;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) NSString *routeUrlString;
@property (nonatomic) BOOL isTag;
@property (nonatomic) BOOL isFromTruncationToken;
@property (retain, nonatomic) AWEPlayInteractionDescriptionAttachModel *attachModel;
@property (retain, nonatomic) id content;
@property (nonatomic) BOOL needDefaultAction;

+ (id)createDescriptionExtraModelWithTextExtra:(id)a0 description:(id)a1;
+ (id)createDescriptionExtraModelWithDescriptionExtraModel:(id)a0;

- (BOOL)isValidTextExtra:(id)a0;
- (BOOL)setUp;
- (void).cxx_destruct;

@end
