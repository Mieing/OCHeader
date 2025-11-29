@class NSArray, NSString;
@protocol Optional;

@interface BDARVImageInfosModel : JSONModel

@property (retain, nonatomic) NSArray *url_list;
@property (copy, nonatomic) NSString<Optional> *uri;
@property (copy, nonatomic) NSString<Optional> *url;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString<Optional> *type;

- (id)urlStringAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
