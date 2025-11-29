@class NSNumber, NSString, NSDictionary;

@interface __RTVEmoticonModel : NSObject <RTVEmoticonModel>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) NSNumber *version;
@property (readonly, copy, nonatomic) NSString *static_type;
@property (readonly, copy, nonatomic) NSString *animate_type;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSDictionary *rawDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)__emoticonTypeWithResourceType:(unsigned long long)a0 themeStyle:(unsigned long long)a1;
- (id)initWithAWEIMEmoticon:(id)a0 themeStyle:(unsigned long long)a1;
- (void).cxx_destruct;

@end
