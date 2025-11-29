@class NSString;

@interface NLEResource_OC : NSObject

@property (nonatomic) struct Resource { int type; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } resource_id; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } effect_id; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } platform; int resource_space; } cppResource;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long space;
@property (retain, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSString *effectId;
@property (retain, nonatomic) NSString *platform;

+ (id)getMuseId:(id)a0;

- (id)toURS;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;

@end
