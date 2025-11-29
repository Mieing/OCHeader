@class NSString, NSNumber;

@interface Finder_Data : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *logo_url;
@property (retain, nonatomic) NSNumber *finder_uin;

+ (id)makeWithUsername:(id)a0 nickname:(id)a1 logo_url:(id)a2 finder_uin:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
