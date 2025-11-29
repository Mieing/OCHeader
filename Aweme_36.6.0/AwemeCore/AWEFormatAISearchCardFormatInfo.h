@class NSString, AWEFormatAISearchCardFormatAvatarInfo;

@interface AWEFormatAISearchCardFormatInfo : MTLModel <MTLJSONSerializing, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *copedContent;
@property (nonatomic) long long uid;
@property (nonatomic) long long cid;
@property (copy, nonatomic) NSString *avatarAliasName;
@property (copy, nonatomic) NSString *discussionTopic;
@property (copy, nonatomic) NSString *formatSchema;
@property (copy, nonatomic) NSString *formatId;
@property (nonatomic) long long imBotId;
@property (retain, nonatomic) AWEFormatAISearchCardFormatAvatarInfo *avatarThumb;
@property (retain, nonatomic) AWEFormatAISearchCardFormatAvatarInfo *avatarMedium;
@property (retain, nonatomic) AWEFormatAISearchCardFormatAvatarInfo *avatarLarge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
