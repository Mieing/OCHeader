@class NSString, NSMutableArray;

@interface IESECPopupInfo : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSMutableArray *urlsArray;
@property (readonly, nonatomic) unsigned long long urlsArray_Count;

+ (id)descriptor;

@end
