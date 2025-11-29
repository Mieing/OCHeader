@class NSString;

@interface AWESearchVideoNoteModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *notes;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
