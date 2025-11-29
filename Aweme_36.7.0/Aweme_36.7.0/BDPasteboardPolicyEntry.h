@interface BDPasteboardPolicyEntry : BDPrivacyCertEntry

+ (void)setString:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (void)setItems:(id)a0 options:(id)a1 withPolicy:(id)a2 error:(id *)a3;
+ (void)setItems:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (id)stringWithPolicy:(id)a0 error:(id *)a1;
+ (id)itemsWithPolicy:(id)a0 error:(id *)a1;
+ (void)setStrings:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (id)stringsWithPolicy:(id)a0 error:(id *)a1;
+ (id)URLWithPolicy:(id)a0 error:(id *)a1;
+ (id)URLsWithPolicy:(id)a0 error:(id *)a1;
+ (id)imageWithPolicy:(id)a0 error:(id *)a1;
+ (id)imagesWithPolicy:(id)a0 error:(id *)a1;
+ (id)colorWithPolicy:(id)a0 error:(id *)a1;
+ (id)colorsWithPolicy:(id)a0 error:(id *)a1;
+ (id)valuesForPasteboardtype:(id)a0 inItemSet:(id)a1 withPolicy:(id)a2 error:(id *)a3;
+ (id)dataForPasteboardtype:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (id)dataForPasteboardtype:(id)a0 inItemSet:(id)a1 withPolicy:(id)a2 error:(id *)a3;
+ (void)setURL:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (void)setURLs:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (void)setImage:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (void)setImages:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (void)setColor:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (void)setColors:(id)a0 withPolicy:(id)a1 error:(id *)a2;
+ (void)setValue:(id)a0 forPasteboardType:(id)a1 withPolicy:(id)a2 error:(id *)a3;
+ (void)setData:(id)a0 forPasteboardType:(id)a1 withPolicy:(id)a2 error:(id *)a3;

@end
