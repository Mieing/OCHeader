@class NSString, AWENewStoryGroupModel;

@interface AWEStoryImpl.Story25StoryGroupItem : MTLModel <MTLJSONSerializing> {
    void /* function */ itemID;
}

@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, retain) AWENewStoryGroupModel *storyGroupV2;

+ (id)itemIDJSONTransformer;
+ (id)storyGroupV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
