@class NSString, NSDictionary;

@interface AWEIMGroupSPImageTaskSettings : NSObject

@property (readonly, copy, nonatomic) NSString *effectID;
@property (readonly, nonatomic) BOOL needTags;
@property (readonly, copy, nonatomic) NSDictionary *originDict;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
