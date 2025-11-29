@class NSString;

@interface WCSiriContactEncode : WCSiriContact

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *originUsername;

- (id)initWithContact:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
