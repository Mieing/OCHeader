@class NSString;

@interface AWEECOMIMMoreItem : MTLModel <MTLJSONSerializing, NSCopying>

@property (nonatomic) unsigned long long operateType;
@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *toastContent;
@property (copy, nonatomic) NSString *itemIconURL;
@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *iconCodeString;
@property (copy, nonatomic) NSString *displayType;
@property (copy, nonatomic) NSString *localIconName;
@property (copy, nonatomic) NSString *btmCDID;
@property (nonatomic) long long needPreCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)moreItemRemindDisplayKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
