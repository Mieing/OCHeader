@class ACCURS, NSString;

@interface AEKBasicResource : NSObject <AEKBasicResource>

@property (readonly, nonatomic) ACCURS *urs;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0 urs:(id)a1 name:(id)a2;
- (void).cxx_destruct;

@end
