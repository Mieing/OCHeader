@class NSDictionary, NSString;

@interface AWEStudioImageDetectResultImpl : NSObject <AWEStudioImageDetectResult>

@property (retain, nonatomic) NSDictionary *infoMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_infoWithKey:(id)a0;
- (id)p_resultWithInfo:(id)a0;
- (id)invalid;
- (id)subtitle;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)objectForKey:(id)a0;
- (id)title;

@end
